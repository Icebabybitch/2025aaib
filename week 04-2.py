# week04-2.py �O���Ѫ� LeetCode �D���D Easy �D (�G�X�@)
# LeetCode 2529. Maxinum Count of Positive Integer and Negative Integer
# ��X "���X�ӥ���" "���X�ӭt��", �j�����Ӽƶq�^��
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
       pos = 0
       neg = 0 # �j��e��, �ǳƦn, ����0
       for i in range(len(nums)): #�j���, ��s��
            if nums[i] > 0 : pos += 1
            if nums[i] < 0 : neg += 1
       #�j��᭱, �⵪�׮��ӥ�
       return max(pos, neg)
