class Solution {
public:
    int romanToInt(string s) {
        
	map <char, int>mp = {
	{'I', 1},
	{'V', 5},
	{'X', 10},
	{'L', 50},
	{'C', 100},
	{'D', 500},
	{'M', 1000}
};
int num = 0;
if (s.size() == 1) {
	return mp[s[0]];
}
else {
	for (short i = 0; i < s.size(); i++) {
		if (i != s.size() - 1) {
			if (mp[s[i]] >= mp[s[i + 1]]) {
				num += mp[s[i]];
			}
			else {
				num += mp[s[i + 1]] - mp[s[i]];
				i++;
			}
		}
		else if (i == s.size() - 1 && mp[s[i - 1]] >= mp[s[i]]) {
			num += mp[s[i]];
		}
	}
	return num;
}
	
    }
};