#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;

    double* arr = new double[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    double max = *max_element(arr, arr + n);

    double* fake = new double[n];
    double sum = 0;

    for(int i = 0; i < n; i++){
        fake[i] = arr[i] / max * 100;   
        sum += fake[i];
    }
    cout << (double)sum / (double)n;

    delete [] arr;
    delete [] fake;
    return 0;
}

    // int N;	// ���� �� ���� ����
	// double sum = 0;
	// cin >> N;
 
	// double arr[1001];
	// for(int i = 0; i < N; i++) {
	// 	cin >> arr[i];
	// }
 
	// sort(arr, arr + N);		// �迭 �������� ����
	
	// // ���� ū ������ ���� ������ �ε����� ��ġ�ϰ� ��
	// for(int i = 0; i < N; i++) {
	// 	sum = sum + (arr[i] / arr[N - 1]) * 100;	// (���� �� ���� = (���� / �ְ� ����) * 100) �� ���� ��
	// }
 
	// cout << sum / N;	// ���� ���
	// return 0;