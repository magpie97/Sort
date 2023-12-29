#include <iostream>
#include <random>
#include <array>
#include <algorithm>


using namespace std;

int main()
{
	// sort  algorithm  
	// 1 ~ 100 ���� ������ ��������

	int swapcount = 0;

	// ���� ����
	std::random_device random;

	std::mt19937 gen(random());							// ���� ���� ����

	std::uniform_int_distribution<int> dis(0, 99);		// �յ��ϰ� �����ϱ� ���� ����

	// �迭 �ִ� ũ�� 20
	array<int, 20> arr = {};

	for (int i = 0; i < arr.size(); i++)
	{
		// ��ҿ� �ֱ�
		arr[i] = dis(gen);
	}

	for (int i = 0; i < arr.size() - 1; i++)		// �迭 ũ�� ��ŭ ����
	{
		for (int j = i + 1; j < arr.size(); j++)	// �迭 1�� ���� ���� �ε��� ��
		{
			if (arr[i] > arr[j])
			{
				// ���õ� �ε��� ���� ���� �ε��� ���� ũ�� ����
				swap(arr[i], arr[j]);

				swapcount++;
			}
		}
	}

	// ���ĵ� �迭 ���
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Swap Count : " << swapcount << endl;

	return 0;
}
