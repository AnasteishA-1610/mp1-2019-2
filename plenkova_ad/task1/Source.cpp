#include <stdio.h>
#include <math.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	float m, m1, m2, m3, m4, m5, dsp, dvp, der, h, w, d;
	int n;

	printf("������� ������ ����� (�� 180 �� 220 ��)\n");
	scanf_s("%f", &h);

	n = (((int)h - 3) / 41.5); //���������� �����
	printf("���������� ����� = %d \n", n);

	printf("������� ������ ����� (�� 80 �� 120 ��)\n");
	scanf_s("%f", &w);

	printf("������� ������� ����� (�� 50 �� 90 ��)\n");
	scanf_s("%f", &d);

	der = 800;
	dsp = 850;
	dvp = 800;

	printf("��������� ������ = %.1f", der);
	printf(" �� �� �3 \n");

	printf("��������� ��� = %.1f", dsp);
	printf(" �� �� �3 \n");

	printf("��������� ��� = %.1f", dvp);
	printf(" �� �� �3 \n");

	m1 = dvp * h * w * 0.5; //������ ������
	m2 = 2 * dsp * h * d * 1.5; //������� ������
	m3 = 2 * dsp * w * d * 1.5; //���� � ���
	m4 = 2 * der * h * (w / 2) * 1; //�����
	m5 = n * dsp * d * (w - 3) * 1.5; //�����

	m = (m1 + m2 + m3 + m4 + m5) / 1000000;
	printf("����� ����� = %.1f", m);
	printf(" ��");
}