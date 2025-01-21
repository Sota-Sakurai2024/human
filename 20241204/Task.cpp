#include <iostream>
#include <vector>

using namespace std;

struct Position
{
    int y;
    int x;
};

struct Define
{
    static const int MAP_SIZE = 7;
    //スタートゴール位置の定数
    static inline const Position START_POS = {2, 2};
    static inline const Position GOAL_POS = {6, 6};
};

struct Direction
{
    static inline const Position TOP = { 0, -1};
    static inline const Position BOTTOM = { 0, 1};
    static inline const Position LEFT = { -1, 0};
    static inline const Position RIGHT = { 1, 0};

    static inline const auto TARGETS =
    {
        TOP, LEFT, BOTTOM, RIGHT
    };
};

//Map
int map[Define::MAP_SIZE][Define::MAP_SIZE] = 
{
    {1, 0, 1, 0, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 1, 0, 1, 1, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 0, 0, 1, 0, 1, 1},
    {1, 0, 0, 1, 1, 0, 1}

};

//探索済みかを調べる変数
bool explored[Define::MAP_SIZE][Define::MAP_SIZE] = {false};

bool depthFirstSearch()
{
    vector<Position> stack;
    stack.emplace_back(Define::START_POS);
    explored[Define::START_POS.x][Define::START_POS.y] = true;

    while (!stack.empty())
    {
        //現在位置を取得する
        Position currentPos = stack.back();
        cout << "現在位置 : " << currentPos.x << "," << currentPos.y << endl;
        //現在の位置を取得したので削除する
        stack.pop_back();

        cout << endl;

        if (currentPos.x == Define::GOAL_POS.x && currentPos.y == Define::GOAL_POS.y) return true;

        for (auto itr  = Direction::TARGETS.begin(); itr != Direction::TARGETS.end(); ++itr)
        {
            Position nextPos = { currentPos.x + itr->x, currentPos.y + itr->y };
            //現在の座標が0またはその地点が0なら探索しない
            if (nextPos.x < 0 || nextPos.y < 0 || map[nextPos.x][nextPos.y] == 0)
            {
                cout << "探索できない" << endl;
                continue;
            }
            //探索済みでなければstackに追加する
            if (!explored[nextPos.x][nextPos.y])
            {
                stack.emplace_back(nextPos);
                explored[nextPos.x][nextPos.y] = true;
            }
        }
    }
    return false;
}

//mapで定義されている0の部分に何故か進んでしまう

int main()
{
    if (depthFirstSearch())
    {
        cout << "ゴールにたどり着きました";
    }
    else 
    {
        cout << "ゴールにたどり着けませんでした";
    }

    cout << endl;

    return 0;
}