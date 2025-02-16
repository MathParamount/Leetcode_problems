#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            unordered_map<int,int> map;

            int complemento;

            for(int i = 0; i<= nums.size(); i++)
            {
                complemento = target - nums[i];

                if(map.find(complemento) != map.end())
                {
                    return {map[complemento],i};
                }

                map[nums[i]] = i;       //tenta adicionar complementos para futuras comparações
            }

            return {};
        }
};
