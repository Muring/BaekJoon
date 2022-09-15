#include <iostream>
using namespace std;

int main(){
    // 테스트 케이스의 개수
    int c;
    cin >> c;

    for(int j = 0; j < c; j++){
        // 각 케이스의 학생 수
        int n;
        double avg = 0;
        cin >> n;

        // 학생 수에 따른 동적 배열 및 성적 입력, 평균 구하기
        int* arr = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            avg += arr[i];
        }
        avg = avg / n;

        // 평균이 넘는 학생 수 구하기
        double count = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] > avg)
                count++;
        }

        double result = count / n * 100;

        cout << fixed;          // 소수점 고정
        cout.precision(3);      // 소숫점 자리수
        cout << result << "%" << endl;
    }

}   