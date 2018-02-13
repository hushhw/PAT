/*
1054. ��ƽ��ֵ (20)

����Ļ���Ҫ��ǳ��򵥣�����N��ʵ�����������ǵ�ƽ��ֵ�������ӵ�����Щ�������ݿ����ǷǷ��ġ�
һ�����Ϸ�����������[-1000��1000]�����ڵ�ʵ����������ྫȷ��С�����2λ���������ƽ��ֵ��ʱ�򣬲��ܰ���Щ�Ƿ������������ڡ�

�����ʽ��

�����һ�и���������N��<=100�������һ�и���N��ʵ�������ּ���һ���ո�ָ���

�����ʽ��

��ÿ���Ƿ����룬��һ���������ERROR: X is not a legal number��������X�����롣
�����һ��������������The average of K numbers is Y��������K�ǺϷ�����ĸ�����Y�����ǵ�ƽ��ֵ����ȷ��С�����2λ��
���ƽ��ֵ�޷����㣬���á�Undefined���滻Y��
���KΪ1���������The average of 1 number is Y����

��������1��
7
5 -3.2 aaa 9999 2.3.4 7.123 2.35
�������1��
ERROR: aaa is not a legal number
ERROR: 9999 is not a legal number
ERROR: 2.3.4 is not a legal number
ERROR: 7.123 is not a legal number
The average of 3 numbers is 1.38
��������2��
2
aaa -9999
�������2��
ERROR: aaa is not a legal number
ERROR: -9999 is not a legal number
The average of 0 numbers is Undefined
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

using namespace std;
int main()
{
    int n, cnt = 0;
    char a[50], b[50];
    double temp, sum = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%s", a);

        /*    sscanf() - ��һ���ַ����ж�����ָ����ʽ���������.
            ����ԭ��:
            int sscanf(string str, string fmt, mixed var1, mixed var2 ...);
            int scanf(const char *format[, argument]...);
            ˵����
            sscanf��scanf���ƣ�������������ģ�ֻ�Ǻ�������Ļ(stdin)Ϊ����Դ��ǰ���Թ̶��ַ���Ϊ����Դ��*/

        sscanf(a, "%lf", &temp);//��a��double����д��temp
        sprintf(b, "%.2lf", temp);//��temp��.2doubleд��b
        int flag = 0;
        for (int j = 0; j < strlen(a); j++) {
			//cout<<"a[j]:"<<a[j]<<endl;
			//cout<<"b[j]:"<<b[j]<<endl;
            if (a[j] != b[j]) {
                flag = 1;		//�����ų��ַ�������aaa����
            }
        }
        if (flag || temp < -1000 || temp > 1000) {
            printf("ERROR: %s is not a legal number\n", a);
            continue;
        }
        else {
            sum += temp;
            cnt++;
        }
    }
    if (cnt == 1) {
        printf("The average of 1 number is %.2lf", sum);
    }
    else if (cnt > 1) {
        printf("The average of %d numbers is %.2lf", cnt, sum / cnt);
    }
    else {
        printf("The average of 0 numbers is Undefined");
    }
	system("pause");
    return 0;
}