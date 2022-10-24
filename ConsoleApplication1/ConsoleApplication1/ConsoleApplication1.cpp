// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;
int main()
{
    int N = 0;
    queue<int> deck;
    collection;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        deck.push(i);
    }
    while (deck.size() != 1)
    {
        deck.pop();
        deck.push(deck.front());
        deck.pop();
    }
    cout << deck.front();
}

