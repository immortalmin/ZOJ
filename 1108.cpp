
#include<iostream>
#include<algorithm>
using namespace std;
int dp[1001], pre[1001];
struct mice
{
	int order; //记住初始时各只老鼠的顺序，避免后面操作时打乱
	int weight;
	int speed;
}m[1001];
 
bool cmp(mice &m1, mice&m2) //这里不使用二级结构体排序也可以直接AC
{
	return (m1.weight < m2.weight);
}
 
void output(int i) //递归后，正向输出路径
{
	if (pre[i] == 0)
	{
		cout << m[i].order << endl;
		return;
	}
	output(pre[i]);
	cout << m[i].order << endl;
}
int main(void)
{
//	freopen("1.txt", "r", stdin);
	int i = 1, total, ans = 0, ans_index;
	while (cin >> m[i].weight >> m[i].speed)
	{
		pre[i] = 0;
		m[i].order = i;  
		i++;
	}
	total = i - 1;
	sort(m + 1, m + total + 1, cmp);
	for (int i = 1; i <= total; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (m[j].speed > m[i].speed&&m[j].weight < m[i].weight&&(dp[i] < dp[j] + 1))
			{
				dp[i] = dp[j] + 1;
				pre[i] = j; //记录j的前驱是i，以利于后面路径的输出
			}
		}
		if (ans < dp[i])
		{
			ans = dp[i];
			ans_index = i;
		}	
	}
	cout << ans << endl;
	output(ans_index);
	return 0;
}