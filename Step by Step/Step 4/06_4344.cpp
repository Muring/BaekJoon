#include <iostream>
using namespace std;

int main(){
    // �׽�Ʈ ���̽��� ����
    int c;
    cin >> c;

    for(int j = 0; j < c; j++){
        // �� ���̽��� �л� ��
        int n;
        double avg = 0;
        cin >> n;

        // �л� ���� ���� ���� �迭 �� ���� �Է�, ��� ���ϱ�
        int* arr = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            avg += arr[i];
        }
        avg = avg / n;

        // ����� �Ѵ� �л� �� ���ϱ�
        double count = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] > avg)
                count++;
        }

        double result = count / n * 100;

        cout << fixed;          // �Ҽ��� ����
        cout.precision(3);      // �Ҽ��� �ڸ���
        cout << result << "%" << endl;
    }

}   