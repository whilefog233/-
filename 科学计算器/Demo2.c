#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void arith() {//等差数列
	struct arith {
		double first;
		double end;
		double d;
		double n;
	}m;
	printf("请输入首项:");
	scanf_s("%lf", &m.first);
	printf("请输入末项:");
	scanf_s("%lf", &m.end);
	printf("请输入公差:");
	scanf_s("%lf", &m.d);
	//求和(a1+an)*n/2;
	//计算项数:
	m.n = abs(m.end - m.first) / m.d;
	//计算和
	double result = ((m.end + m.first) * (m.n+1)) / 2;
	printf("%.2lf", result);

}
static int  factorialCount(int a) {//递归求阶乘
	if (a == 1)
		return 1;
	else
		return a * factorialCount(a - 1);
}
void factorial() {//计算阶乘.
	int a;
	printf("请输入你要计算阶乘的数字:");
	scanf_s("%d",&a);
	while (a < 1)
	{
		printf("输入错误,请重新输入:");
		scanf_s("%d", &a);
	}
	//a*a-1*a-2*a-3;
	int result=factorialCount(a);
	printf("%d", result);
	
}
	static void  M(int flag) {      //矩阵计算
	
		struct factorial {
			int ROWS;
			int COLS;
			int a;
			int b;
			int M[10][10];
			int N[10][10];
			int sum[10][10];
		}a;
			
		printf("请输入矩阵的行数和列数：\n");
		scanf_s("%d%d", &a.ROWS, &a.COLS);
		
		for (int i = 0; i < a.ROWS; i++) {//录入第一个矩阵
			for (int j = 0; j < a.COLS; j++) {
				printf("M[%d][%d] = ", i, j);
				scanf_s("%d", &a.M[i][j]);
			}
		}
		for (int i = 0; i < a.ROWS; i++) {//录入第二个矩阵
			for (int j = 0; j < a.COLS; j++) {
				printf("N[%d][%d] = ", i, j);
				scanf_s("%d", &a.N[i][j]);
			}
		}
		if (flag == 1) {
			for (int i = 0; i < a.ROWS; i++) {//计算相加之后的矩阵
				for (int j = 0; j < a.COLS; j++) {
					a.sum[i][j] = a.M[i][j] + a.N[i][j];
				}
			}
		}
		else if (flag == 2) {
			for (int i = 0; i < a.ROWS; i++) {//计算相减之后的矩阵
				for (int j = 0; j < a.COLS; j++) {
					a.sum[i][j] = a.M[i][j] - a.N[i][j];
				}
			}
		}
		for (int i = 0; i < a.ROWS; i++) {//遍历
			for (int j = 0; j < a.COLS; j++) {
				printf("%d ", a.sum[i][j]);
			}printf("\n");
		}
}
	void Mmul() {
		
			int m, n, p, q;
		
			int firstMatrix[10][10];
			int secondMatrix[10][10];
			int resultMatrix[10][10];
		
		printf("请输入第一个矩阵的行和列：\n" );
		scanf_s("%d%d", &m, &n);

		printf("请输入第二个矩阵的行和列：\n" );
		scanf_s("%d%d", &p, &q);

		printf("请输入第一个矩阵的元素：\n");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf_s("%d", &firstMatrix[i][j]);// 1 2 3 、4 5 6 
			}
		}

		printf("请输入第二个矩阵的元素：\n");
		for (int i = 0; i < p; i++) {
			for (int j = 0; j < q; j++) {
				scanf_s("%d", &secondMatrix[i][j]);//7 8 、9 10、11 12 
			}
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < q; j++) {
				resultMatrix[i][j] = 0;
				for (int k = 0; k < n; k++) {
					resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
				}
			}
		}

		printf("矩阵乘法的结果是：\n");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < q; j++) {
				printf("%d ", resultMatrix[i][j]);//58 64 、 139 154
			}
			printf("\n");
		}
}

 void MCount() {//两个矩阵加减
	 //设置菜单
	 int number,sum;
	 printf("1.矩阵相加 2.矩阵相减 3.矩阵相乘 ");
	 scanf_s("%d", &number);
	 switch (number) {
	 case 1: M(1); break;
	 case 2: M(2); break;
	 case 3: Mmul(); break;
	 default:break;
	 }
	
}

 // 求集合的交集和并集
 void gether() {
	 struct gether {
		 int set1[20] ;
		 int set2[20];
		 int a;
		 int b;
		 int intersection[20]; // 交集
		 int union_set[20];  // 并集
	 }n;
	 printf("请输入第一个集合的长度a:\n");
	 scanf_s("%d", &n.a);
	 printf("请输入第二个集合的长度b:\n");
	 scanf_s("%d", &n.b);
	 printf("请输入第一个集合:\n");
	
	 for (int i = 0; i < n.a; i++)
	 {
		 scanf_s("%d", &n.set1[i]);
	 }

	 printf("请输入第二个集合:\n");
	 for (int i = 0; i < n.b; i++)
	 {
		 scanf_s("%d", &n.set2[i]);
	 }
	

	 int i, j, k = 0;

	 // 计算交集
	 for (i = 0; i < n.a; i++) {
		 for (j = 0; j < n.b; j++) {
			 if (n.set1[i] == n.set2[j]) {
				 n.intersection[k++] = n.set1[i];
				 break;
			 }
		 }
	 }

	 // 计算并集
	 for (i = 0; i < n.a; i++) {
		 n.union_set[i] = n.set1[i];
	 }

	 int union_size = n.a;

	 for (i = 0; i < n.b; i++) {
		 int found = 0;
		 for (j = 0; j < n.a; j++) {
			 if (n.set2[i] == n.set1[j]) {
				 found = 1;
				 break;
			 }
		 }
		 if (!found) {
			 n.union_set[union_size++] = n.set2[i];
		 }
	 }

	 // 输出结果
	 printf("Intersection: { ");
	 for (i = 0; i < k; i++) {
		 printf("%d ", n.intersection[i]);
	 }
	 printf("}\n");
	 printf("Union: { ");
	 for (i = 0; i < union_size; i++) {
		 printf("%d ", n.union_set[i]);
	 }
	 printf("}\n");
 }
 void linearEquation1() {
	 printf("求a*x的平方+bx+c=0方程的根,现在请录入,a,b,c\n");
	 double a, b, c, disc, x1, x2, p, q;
	 scanf_s("%lf%lf%lf", &a, &b, &c);
	 disc = b * b - 4 * a * c;
	 p = -b / (2.0 * a);
	 q = sqrt(disc) / (2.0 * a);
	 x1 = p + q; x2 = p - q;
	 printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);
 }

 // 计算行列式  
 double determinant(double a11, double a12, double a21, double a22) {
	 return a11 * a22 - a12 * a21;
 }

 // 求解二元一次方程组  
 void linearEquation2() {
	 printf(" 假设方程组如下:\n 2x1 + 3x2 = 11\n 4x1 - 2x2 = 6 ");
	 double a11, a12, b1, a21, a22, b2;
	 double  x1,  x2;
	 printf("请输入a11,a12,b1");
	 scanf_s("%lf%lf%lf", &a11, &a12, &b1);
	 printf("请输入a21,a22,b2");
	 scanf_s("%lf%lf%lf", &a21, &a22, &b2);

	 double D = determinant(a11, a12, a21, a22); // 系数行列式  
	 if (D == 0) {
		 printf("方程组无解或有无穷多解。\n");
		 return;
	 }

	 double Dx1 = determinant(b1, a12, b2, a22); // 替换x1后的行列式  
	 double Dx2 = determinant(a11, b1, a21, b2); // 替换x2后的行列式  

	 x1 = Dx1 / D;
	 x2 = Dx2 / D;

	 printf("x1=%.2lf\n", x1);
	 printf("x2=%.2lf\n", x2);
 }
 void det() {
	 //传入行列式
	 int det[10][10], n;
	 //1.录入行列式,
	 // 是几阶行列式?输入n;
	 //设定n的范围;(1-4);

	 printf("您要计算几阶行列式?请输入数字:(1-3)");
	 scanf_s("%d", &n);
	 while (n > 3 || n < 1) {
		 printf("输入错误,请重新输入:(1-3)");
		 scanf_s("%d", &n);
	 }
	 printf("请输入行列式:\n");
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j < n; j++) {
			 scanf_s("%d", &det[i][j]);
		 }
	 }
	 //1.行列式计算.
	 //二阶计算
	 int result = 0;
	 if (n == 1) {
		 result = det[0][0];
	 }
	if (n == 2) {
		result = det[0][0] * det[1][1] - det[0][1] * det[1][0];
	}
	//三阶计算
	if (n == 3) {
		result = det[0][0] * det[1][1] * det[2][2] + det[1][0] * det[2][1] * det[0][2] +
			det[0][1] * det[1][2] * det[2][0] - det[2][0] * det[1][1] * det[0][2]
			- det[1][0] * det[0][1] * det[2][2] - det[0][0] * det[1][2] * det[2][1];
	}
	printf("%d", result);
}
 double determinant3(double a11, double a12, double a13, double a21, double a22, double a23, double a31, double a32, double a33) {
	  
	 int result = a11 * a22 * a33 + a21 * a32 * a13 + a12 * a23 * a31 
		 - a13 * a22 * a31 - a21 * a12 * a33 - a32 * a23 * a11;
	 
	 return result; // 返回行列式的值  
 }

 void linearEquation3() {
	 printf("假设三元一次方程组为:\na11*DX1+a12*DX2+a13*DX3=b1\na21*DX1+a22*DX2+a23*DX3=b2\na31*DX1+a32*DX2+a33*DX3=b3\n");
	 double  a11, a12, a13, a21, a22, a23, a31, a32, a33,b1,b2,b3 ,x1, x2, x3;
	printf("请输入a11, a12, a13, b1\n");
	 scanf_s("%lf%lf%lf%lf", &a11, &a12, &a13, &b1);

	 printf("请输入a21, a22, a23, b2\n");
	 scanf_s("%lf%lf%lf%lf", &a21, &a22, &a23, &b2);

	 printf("请输入a31, a32, a33, b3\n");
	 scanf_s("%lf%lf%lf%lf", &a31, &a32, &a33, &b3);

	 double D = determinant3(a11, a12, a13, a21, a22, a23, a31, a32, a33);
	 if (D == 0) {
		 printf("方程组无解或有无穷多解。\n");
		 return;
	 }

	 // 替换x1后的行列式  
	 double Dx1 = determinant3(b1, a12, a13, b2, a22, a23, b3, a32, a33);
	 // 替换x2后的行列式  
	 double Dx2 = determinant3(a11, b1, a13, a21, b2, a23, a31, b3, a33);
	 // 替换x3后的行列式  
	 double Dx3 = determinant3(a11, a12, b1, a21, a22, b2, a31, a32, b3);

	 x1 = Dx1 / D;
	 x2 = Dx2 / D;
	 x3 = Dx3 / D;

	 printf("x1 = %.2lf\n", x1);
	 printf("x2 = %.2lf\n", x2);
	 printf("x3 = %.2lf\n", x3);
 }

 void run() {
	 //界面设置:界面也要设置成一个函数.
	 int number;
	 printf("科学计算器\t\n");
	 printf("***********************\n");
	 printf("1.行列式运算\n2.阶乘运算\n3.等差求和\n4.矩阵计算\n5.集合的交于并\n");
	 printf("6.一元二次方程\n7.二元一次方程\n8.三元一次方程\n");
	 printf("***********************\n");

	 printf("请选择数字:");
	 scanf_s("%d", &number);
	 switch (number) {
	 case 1: det(); break;//求解行列式
	 case 2: factorial(); break;//阶乘运算
	 case 3: arith(); break;//等差求和
	 case 4: MCount(); break;//矩阵计算
	 case 5: gether(); break;//集合的交于并
	 case 6: linearEquation1(); break;//一元二次方程
	 case 7: linearEquation2(); break;//二元一次方程
	 case 8: linearEquation3(); break;//三元一次方程
	 default:break;
	 }
}
int main() {
	char a;
	while (1) {
		run();//界面
		printf("是否退出系统:(Y||N)?");
		scanf_s(" %c", &a);
		if (a == 'Y' || a == 'y')
		{
			break;
		}
		else if (a == 'N' || a == 'n') {
			continue;
		}
		else
			printf("输入错误,返回程序");
		break;

	}
	return 0;
}