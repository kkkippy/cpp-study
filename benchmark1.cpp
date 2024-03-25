#include <unordered_map>
#include <iostream>
#include <vector>
#include <chrono>

using namespace std::chrono;
using std::unordered_map;
using std::vector;

class Solving
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (map1.find(target - nums[i]) != map1.end())
            {
                return vector<int> { i, map1[target - nums[i]] };
            }
            map1[nums[i]] = i;
        }

        return {};
    }
};

int main()
{
    Solving problem;

    vector<int> nums(100000);
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = i;
    }

    int target = 199997;

    auto start = high_resolution_clock::now();

    int repetitions = 500;

    for (int i = 0; i < repetitions; i++)
    {
        problem.twoSum(nums, target);
    }

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    std::cout << "Código de complexidade temporal de O(n)" << std::endl;
    std::cout << "Teste realizado com " << repetitions << " repetições de um array com " << nums.size() << " valores diferentes, cujo alvo é " << target << std::endl;
    std::cout << "Tempo de execução: " << duration.count() << " microssegundos" << std::endl;
}