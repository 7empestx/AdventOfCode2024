#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

void partOne();
void partTwo();

int main() {
  partOne();
  partTwo();
  return 0;
}

void partOne() {
  string l, r;
  vector<string> lhs;
  vector<string> rhs;
  unsigned sum = 0;

  while (cin >> l >> r) {
    lhs.push_back(l);
    rhs.push_back(r);
  }

  sort(lhs.begin(), lhs.end());
  sort(rhs.begin(), rhs.end());

  for (int i = 0; i < lhs.size(); i++) {
    sum += abs(stoi(lhs[i]) - stoi(rhs[i]));
  }

  cout << sum << endl;
}

void partTwo() {
  string l, r;
  vector<string> lhs;
  unordered_map<string, unsigned> rhs;
  unsigned sum = 0;

  while (cin >> l >> r) {
    lhs.push_back(l);
    rhs[r]++;
  }

  for (int i = 0; i < lhs.size(); i++) {
    sum += stoi(lhs[i]) * rhs[(lhs[i])];
  }

  cout << sum << endl;
}
