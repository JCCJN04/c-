#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target;
    cin >> target;
    
    if(target >= -1000000000 && target <= 1000000000)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    cout << "[" << nums[i] << ", " << nums[j] << "]" << endl;
                }
            }
        }

    }
    
    return 0;
}