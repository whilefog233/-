#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void arith() {//�Ȳ�����
	struct arith {
		double first;
		double end;
		double d;
		double n;
	}m;
	printf("����������:");
	scanf_s("%lf", &m.first);
	printf("������ĩ��:");
	scanf_s("%lf", &m.end);
	printf("�����빫��:");
	scanf_s("%lf", &m.d);
	//���(a1+an)*n/2;
	//��������:
	m.n = abs(m.end - m.first) / m.d;
	//�����
	double result = ((m.end + m.first) * (m.n+1)) / 2;
	printf("%.2lf", result);

}
static int  factorialCount(int a) {//�ݹ���׳�
	if (a == 1)
		return 1;
	else
		return a * factorialCount(a - 1);
}
void factorial() {//����׳�.
	int a;
	printf("��������Ҫ����׳˵�����:");
	scanf_s("%d",&a);
	while (a < 1)
	{
		printf("�������,����������:");
		scanf_s("%d", &a);
	}
	//a*a-1*a-2*a-3;
	int result=factorialCount(a);
	printf("%d", result);
	
}
	static void  M(int flag) {      //�������
	
		struct factorial {
			int ROWS;
			int COLS;
			int a;
			int b;
			int M[10][10];
			int N[10][10];
			int sum[10][10];
		}a;
			
		printf("����������������������\n");
		scanf_s("%d%d", &a.ROWS, &a.COLS);
		
		for (int i = 0; i < a.ROWS; i++) {//¼���һ������
			for (int j = 0; j < a.COLS; j++) {
				printf("M[%d][%d] = ", i, j);
				scanf_s("%d", &a.M[i][j]);
			}
		}
		for (int i = 0; i < a.ROWS; i++) {//¼��ڶ�������
			for (int j = 0; j < a.COLS; j++) {
				printf("N[%d][%d] = ", i, j);
				scanf_s("%d", &a.N[i][j]);
			}
		}
		if (flag == 1) {
			for (int i = 0; i < a.ROWS; i++) {//�������֮��ľ���
				for (int j = 0; j < a.COLS; j++) {
					a.sum[i][j] = a.M[i][j] + a.N[i][j];
				}
			}
		}
		else if (flag == 2) {
			for (int i = 0; i < a.ROWS; i++) {//�������֮��ľ���
				for (int j = 0; j < a.COLS; j++) {
					a.sum[i][j] = a.M[i][j] - a.N[i][j];
				}
			}
		}
		for (int i = 0; i < a.ROWS; i++) {//����
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
		
		printf("�������һ��������к��У�\n" );
		scanf_s("%d%d", &m, &n);

		printf("������ڶ���������к��У�\n" );
		scanf_s("%d%d", &p, &q);

		printf("�������һ�������Ԫ�أ�\n");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf_s("%d", &firstMatrix[i][j]);// 1 2 3 ��4 5 6 
			}
		}

		printf("������ڶ��������Ԫ�أ�\n");
		for (int i = 0; i < p; i++) {
			for (int j = 0; j < q; j++) {
				scanf_s("%d", &secondMatrix[i][j]);//7 8 ��9 10��11 12 
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

		printf("����˷��Ľ���ǣ�\n");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < q; j++) {
				printf("%d ", resultMatrix[i][j]);//58 64 �� 139 154
			}
			printf("\n");
		}
}

 void MCount() {//��������Ӽ�
	 //���ò˵�
	 int number,sum;
	 printf("1.������� 2.������� 3.������� ");
	 scanf_s("%d", &number);
	 switch (number) {
	 case 1: M(1); break;
	 case 2: M(2); break;
	 case 3: Mmul(); break;
	 default:break;
	 }
	
}

 // �󼯺ϵĽ����Ͳ���
 void gether() {
	 struct gether {
		 int set1[20] ;
		 int set2[20];
		 int a;
		 int b;
		 int intersection[20]; // ����
		 int union_set[20];  // ����
	 }n;
	 printf("�������һ�����ϵĳ���a:\n");
	 scanf_s("%d", &n.a);
	 printf("������ڶ������ϵĳ���b:\n");
	 scanf_s("%d", &n.b);
	 printf("�������һ������:\n");
	
	 for (int i = 0; i < n.a; i++)
	 {
		 scanf_s("%d", &n.set1[i]);
	 }

	 printf("������ڶ�������:\n");
	 for (int i = 0; i < n.b; i++)
	 {
		 scanf_s("%d", &n.set2[i]);
	 }
	

	 int i, j, k = 0;

	 // ���㽻��
	 for (i = 0; i < n.a; i++) {
		 for (j = 0; j < n.b; j++) {
			 if (n.set1[i] == n.set2[j]) {
				 n.intersection[k++] = n.set1[i];
				 break;
			 }
		 }
	 }

	 // ���㲢��
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

	 // ������
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
	 printf("��a*x��ƽ��+bx+c=0���̵ĸ�,������¼��,a,b,c\n");
	 double a, b, c, disc, x1, x2, p, q;
	 scanf_s("%lf%lf%lf", &a, &b, &c);
	 disc = b * b - 4 * a * c;
	 p = -b / (2.0 * a);
	 q = sqrt(disc) / (2.0 * a);
	 x1 = p + q; x2 = p - q;
	 printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);
 }

 // ��������ʽ  
 double determinant(double a11, double a12, double a21, double a22) {
	 return a11 * a22 - a12 * a21;
 }

 // ����Ԫһ�η�����  
 void linearEquation2() {
	 printf(" ���跽��������:\n 2x1 + 3x2 = 11\n 4x1 - 2x2 = 6 ");
	 double a11, a12, b1, a21, a22, b2;
	 double  x1,  x2;
	 printf("������a11,a12,b1");
	 scanf_s("%lf%lf%lf", &a11, &a12, &b1);
	 printf("������a21,a22,b2");
	 scanf_s("%lf%lf%lf", &a21, &a22, &b2);

	 double D = determinant(a11, a12, a21, a22); // ϵ������ʽ  
	 if (D == 0) {
		 printf("�������޽���������⡣\n");
		 return;
	 }

	 double Dx1 = determinant(b1, a12, b2, a22); // �滻x1�������ʽ  
	 double Dx2 = determinant(a11, b1, a21, b2); // �滻x2�������ʽ  

	 x1 = Dx1 / D;
	 x2 = Dx2 / D;

	 printf("x1=%.2lf\n", x1);
	 printf("x2=%.2lf\n", x2);
 }
 void det() {
	 //��������ʽ
	 int det[10][10], n;
	 //1.¼������ʽ,
	 // �Ǽ�������ʽ?����n;
	 //�趨n�ķ�Χ;(1-4);

	 printf("��Ҫ���㼸������ʽ?����������:(1-3)");
	 scanf_s("%d", &n);
	 while (n > 3 || n < 1) {
		 printf("�������,����������:(1-3)");
		 scanf_s("%d", &n);
	 }
	 printf("����������ʽ:\n");
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j < n; j++) {
			 scanf_s("%d", &det[i][j]);
		 }
	 }
	 //1.����ʽ����.
	 //���׼���
	 int result = 0;
	 if (n == 1) {
		 result = det[0][0];
	 }
	if (n == 2) {
		result = det[0][0] * det[1][1] - det[0][1] * det[1][0];
	}
	//���׼���
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
	 
	 return result; // ��������ʽ��ֵ  
 }

 void linearEquation3() {
	 printf("������Ԫһ�η�����Ϊ:\na11*DX1+a12*DX2+a13*DX3=b1\na21*DX1+a22*DX2+a23*DX3=b2\na31*DX1+a32*DX2+a33*DX3=b3\n");
	 double  a11, a12, a13, a21, a22, a23, a31, a32, a33,b1,b2,b3 ,x1, x2, x3;
	printf("������a11, a12, a13, b1\n");
	 scanf_s("%lf%lf%lf%lf", &a11, &a12, &a13, &b1);

	 printf("������a21, a22, a23, b2\n");
	 scanf_s("%lf%lf%lf%lf", &a21, &a22, &a23, &b2);

	 printf("������a31, a32, a33, b3\n");
	 scanf_s("%lf%lf%lf%lf", &a31, &a32, &a33, &b3);

	 double D = determinant3(a11, a12, a13, a21, a22, a23, a31, a32, a33);
	 if (D == 0) {
		 printf("�������޽���������⡣\n");
		 return;
	 }

	 // �滻x1�������ʽ  
	 double Dx1 = determinant3(b1, a12, a13, b2, a22, a23, b3, a32, a33);
	 // �滻x2�������ʽ  
	 double Dx2 = determinant3(a11, b1, a13, a21, b2, a23, a31, b3, a33);
	 // �滻x3�������ʽ  
	 double Dx3 = determinant3(a11, a12, b1, a21, a22, b2, a31, a32, b3);

	 x1 = Dx1 / D;
	 x2 = Dx2 / D;
	 x3 = Dx3 / D;

	 printf("x1 = %.2lf\n", x1);
	 printf("x2 = %.2lf\n", x2);
	 printf("x3 = %.2lf\n", x3);
 }

 void run() {
	 //��������:����ҲҪ���ó�һ������.
	 int number;
	 printf("��ѧ������\t\n");
	 printf("***********************\n");
	 printf("1.����ʽ����\n2.�׳�����\n3.�Ȳ����\n4.�������\n5.���ϵĽ��ڲ�\n");
	 printf("6.һԪ���η���\n7.��Ԫһ�η���\n8.��Ԫһ�η���\n");
	 printf("***********************\n");

	 printf("��ѡ������:");
	 scanf_s("%d", &number);
	 switch (number) {
	 case 1: det(); break;//�������ʽ
	 case 2: factorial(); break;//�׳�����
	 case 3: arith(); break;//�Ȳ����
	 case 4: MCount(); break;//�������
	 case 5: gether(); break;//���ϵĽ��ڲ�
	 case 6: linearEquation1(); break;//һԪ���η���
	 case 7: linearEquation2(); break;//��Ԫһ�η���
	 case 8: linearEquation3(); break;//��Ԫһ�η���
	 default:break;
	 }
}
int main() {
	char a;
	while (1) {
		run();//����
		printf("�Ƿ��˳�ϵͳ:(Y||N)?");
		scanf_s(" %c", &a);
		if (a == 'Y' || a == 'y')
		{
			break;
		}
		else if (a == 'N' || a == 'n') {
			continue;
		}
		else
			printf("�������,���س���");
		break;

	}
	return 0;
}