#include <iostream>
#include <random>
#include <array>
#include <algorithm>


using namespace std;

int main()
{
	// sort  algorithm  
	// 1 ~ 100 까지 난수의 오름정렬

	int swapcount = 0;

	// 난수 생성
	std::random_device random;

	std::mt19937 gen(random());							// 난수 생성 엔진

	std::uniform_int_distribution<int> dis(0, 99);		// 균등하게 생성하기 위한 정의

	// 배열 최대 크기 20
	array<int, 20> arr = {};

	for (int i = 0; i < arr.size(); i++)
	{
		// 요소에 넣기
		arr[i] = dis(gen);
	}

	for (int i = 0; i < arr.size() - 1; i++)		// 배열 크기 만큼 실행
	{
		for (int j = i + 1; j < arr.size(); j++)	// 배열 1을 더한 다음 인덱스 비교
		{
			if (arr[i] > arr[j])
			{
				// 선택된 인덱스 값이 다음 인덱스 보다 크면 스왑
				swap(arr[i], arr[j]);

				swapcount++;
			}
		}
	}

	// 정렬된 배열 출력
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Swap Count : " << swapcount << endl;

	return 0;
}
