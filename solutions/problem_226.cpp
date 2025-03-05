#include <iostream>
#include <vector>

using namespace std;

class Solution{
  vector<int> dailyTemperature(vector<int>& temperatures)
  {
      vector<int> results(temperature.size(),0);
      vector<int> stack;

      for(int i=0; i< temperatures.size(); i++)
      {
          while(!stack.empty() && temperatures[stack.back()] < temperatures[i])
          {
              int index = stack.back();        // O index vai ser o último elemento da stack
              stack.pop_back();                // Desempilha
              results[index] = i - index;      // calcula os dias de espera
          }
        stack.push_back(i);        //Armazena os índices onde não encotramos uma temperatura maior
      }
        return results;
  }
};
