// quartiles.cpp
/*
	25% => 출력
	50% (중앙값) => 출력
	75% => 출력
*/

#include <iostream>
#include <vector>
#include <algorithm> // sort()

using namespace std;

typedef vector<int>::size_type vec_sz;

int main(void) {
	// 프로그램 설명하기
	cout << "Enter all values, then EOF: ";

	vector<int> val;
	int in;

	while (cin >> in) {
		val.push_back(in);
	}

	// 오류 채킹
	vec_sz size = val.size();
    if (size == 0) {
        cout << "No values. Try again!" << endl;
        return 1; // 오류
	}

	// 정렬
	sort(val.begin(), val.end());

	vec_sz q1 = size / 4;
	vec_sz q2 = size / 2;
	vec_sz q3 = size / 4 * 3;

	int q1_val, q2_val, q3_val;
	q1_val = size % 4 == 0 ? (val[q1] + val[q1 - 1]) / 2 : val[q1];
	q2_val = size % 2 == 0 ? (val[q1] + val[q2 - 1]) / 2 : val[q2];
	q3_val = 3 * size % 4 == 0 ? (val[q3] + val[q3 - 1]) / 2 : val[q1];

	cout <<
		"Q1: " << q1 << endl <<
		"Q2 (중앙값): " << q2 << endl <<
		"Q3: " << q3 << endl;

	return 0;
}

int main(void) {
	// 과제 점수의 중앙값을 구함
	vec_sz mid_pt = size / 2;
	double medain;
	median = size % 2 == 0 ?
		(homework[mid])
}
