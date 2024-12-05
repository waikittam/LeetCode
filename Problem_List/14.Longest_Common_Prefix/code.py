class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        pref = strs[0]

        for s in strs[1:]:
            while not s.startswith(pref):
                pref = pref[:-1]
                if not pref:
                    return ""

        return pref

        