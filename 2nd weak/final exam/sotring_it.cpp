#include <bits/stdc++.h>
using namespace std;
class student
{
public:
  string name;
  int cls;
  char section;
  int id;
  int math_marks;
  int eng_marks;
  int sum;
};
bool cmp(student a, student b)

{
  if (a.sum == b.sum)
  {
    if (a.id < b.id)
    {
      return true;
    }
    else
      return false;
  }
  else
  {
    if (a.sum > b.sum)
      return true;
    else
      return false;
  }
}
int main()
{
  int n;
  cin >> n;
  student ar[n];
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i].name >> ar[i].cls >> ar[i].section >> ar[i].id >> ar[i].eng_marks >> ar[i].math_marks;
    ar[i].sum = ar[i].eng_marks + ar[i].math_marks;
  }

  sort(ar, ar + n, cmp);

  for (int i = 0; i < n; i++)
  {

    cout << ar[i].name << " " << ar[i].cls << " " << ar[i].section << " " << ar[i].id << " " << ar[i].eng_marks << " " << ar[i].math_marks << " " << endl;
  }

  return 0;
}