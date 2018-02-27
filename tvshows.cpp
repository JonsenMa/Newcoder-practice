//贪心算法
//最先想到的是每次找节目时间最短的，但是发现不满足所有情况，例如：A（0，5），B（1，2），C（3，4）
//正确的算法为每次找节目结束时间最早的，既Te最小
//每次循环需要判断时间段是否有重合，有重合说明时间冲突，不满足条件，舍弃
#include <stdio.h>
#include <string.h>

int flag[24];
//因为节目的开始结束时间都为整数且认为介于0~24之间，故使用一个整形数组表示某一小时是否已被选中
void setflag(int a, int b){
	for (int i = a; i <= b; ++i)
	{
		flag[i] = 1;
	}
}

int getMin(int d[], int n){
	int min = 9999;
	int index;
	for (int i = 0; i < n; ++i)
	{
		if (d[i] < min)
		{
			min = d[i];
			index = i;
		}
	}
	d[index] = 999;
	return index;
}

bool isConflict(int s, int e){
	for (int i = s+1; i < e; ++i)
	{
		if(flag[i] == 1)
			return true;
	}
	return false;
}

int main(){
	int n,min,count,loop = 0;
	int result[100];
	while(scanf("%d", &n) != EOF){
		if (n == 0)
			break;
		else if(n > 100){
			printf("%s\n", "Can not larger than 100!");
			continue;
		}
		int Ts[n],Te[n],temp[n];
		count = 0;
		memset(flag, 0, sizeof(flag));

		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d", &Ts[i], &Te[i]);
			temp[i] = Te[i];
		}
		for (int i = 0; i < n; ++i)
		{
			min = getMin(temp, n);
			if(!isConflict(Ts[min], Te[min])){
				count++;
				setflag(Ts[min], Te[min]);
			}
		}
		loop++;
	}

	for (int i = 0; i < loop; ++i)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}