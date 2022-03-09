class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        difftotal = 0
        for i in range(len(gas)):
            difftotal += gas[i]-cost[i]
        if difftotal<0:
            return -1
        else:
            starting, tank = 0, 0
            for i in range(len(gas)):
                tank += gas[i]-cost[i]
                if tank<0:
                    starting = i+1
                    tank = 0
            return starting
        
                    
            
