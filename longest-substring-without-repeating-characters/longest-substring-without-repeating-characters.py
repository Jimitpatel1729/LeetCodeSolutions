class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s==" ":
            return 1
        s=list(s)
        temp=""
        maxlen=0
        length=0
        for i in range(len(s)):
            if s[i] not in temp:
                temp+=s[i]
                length=len(temp)
            else:
                temp=temp[temp.index(s[i])+1:]
                temp+=s[i]
                maxlen=max(maxlen,length)
        return max(maxlen,length)
        
        