#include <iostream>
#include <vector>

using std::vector;

class Solving
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
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

    vector<int> nums = {3, 2, 4};

    int target = 6;

    vector<int> res = problem.twoSum(nums, target);

    std::cout << "{ " << res[0] << ", " << res[1] << " }" << std::endl;
}