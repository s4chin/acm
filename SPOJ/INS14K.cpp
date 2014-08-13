#include <cstdio>
using namespace std;

int x1[2000], y1[2000], x2[2000], y2[2000];

int main()
{
	int t, n, q, a, i, ans;
	double pos;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=1; i<=n; i++)
			scanf("%d%d%d%d", &x1[i], &y1[i], &x2[i], &y2[i]);
		scanf("%d", &q);
		while(q--)
		{
			ans = 0;
			scanf("%d", &a);
			if(a==1)
			{
				scanf("%d%d%d%d", &x1[i], &y1[i], &x2[i], &y2[i]);
				i++;
			}
			else
			{
				scanf("%lf", &pos);
				for(int k=1; k<i; k++)
				{
					
					if(x1[k]<x2[k])
					{
						if(pos<=x2[k] && pos>=x1[k])
						ans++;
					}
					else
					{
						if(pos>=x2[k] && pos<=x1[k])
						ans++;
					}
				}
				printf("%d\n", ans);
			}
		}
	}
	return 0;
}
