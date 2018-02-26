#include <stdio.h>

int getMax(double R[], int N){
	double max = -2.0;
	int index;
	for (int i = 0; i < N; ++i)
	{
		if(max < R[i]){
			max = R[i];
			index = i;
		}
	}
	R[index] = -1;
	if (max != -1)//如果最大值为-1，说明所有的JavaBeans都已被交换完了
		return index;
	else
		return -1;
}


int main()
{
	int M,N,t,loop=0;
	double count[100];
	while(scanf("%d%d", &M, &N)){
		if ((M == -1)&&(N == -1))
			break;
		int J[N], F[N];
		double R[N];
		for (int i = 0; i < N; ++i)
		{
			scanf("%d%d", &J[i], &F[i]);
			R[i] = (double)J[i]/(double)F[i];//计算性价比
			
		}
		count[loop] = 0.0;
		while(M > 0){
			t = getMax(R, N);
			if (t == -1)//t=-1说明此时M仍大于0但是已经没有JavaBeans可以用来交换了
				break;
			if (M >= F[t])
			{
				M -= F[t];
				count[loop] += J[t];
			}
			else{
				count[loop] = count[loop] + ((double)M/(double)F[t])*(double)J[t];
				M = 0;
			};
		}

		loop++;
	}

	for (int i = 0; i < loop; ++i)
	{
		printf("%0.3f\n", count[i]);
	}
	return 0;
}