/*Input: answers = [1,1,2]
Output: 5
Explanation:
The two rabbits that answered "1" could both be the same color, say red.
The rabbit that answered "2" can't be red or the answers would be inconsistent.
Say the rabbit that answered "2" was blue.
Then there should be 2 other blue rabbits in the forest that didn't answer into the array.
The smallest possible number of rabbits in the forest is therefore 5: 3 that answered plus 2 that didn't.*/

class Solution
{
public:
    int hsh[1005] = {0};
    int numRabbits(vector<int> &answers)
    {
        int n = answers.size();
        for (int i = 0; i < n; i++)
        {
            hsh[answers[i] + 1]++;
        }
        int sum = 0;
        for (int i = 2; i <= 1000; i++)
        {
            if (hsh[i] > 0)
            {
                if (hsh[i] <= i)
                {
                    sum += i;
                }
                else
                {
                    if (hsh[i] % i == 0)
                    {
                        sum += (hsh[i] / i) * i;
                    }
                    else
                    {
                        sum += ((hsh[i] / i) + 1) * i;
                    }
                }
            }
        }
        return (sum + hsh[1]);
    }
};
