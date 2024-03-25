#include <iostream>
#include <vector>
#include <chrono>

using namespace std::chrono;
using std::vector;

class Solving
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
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

    int repetitions = 1;

    for (int i = 0; i < repetitions; i++)
    { 
        problem.twoSum(nums, target);
    }

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    std::cout << "Código de complexidade temporal de O(n²)" << std::endl;
    std::cout << "Teste realizado com " << repetitions << " repetições de um array com " << nums.size() << " valores diferentes, cujo alvo é " << target << std::endl;
    std::cout << "Tempo de execução: " << duration.count() << " microssegundos" << std::endl;
}