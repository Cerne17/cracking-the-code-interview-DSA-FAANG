class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ans = []
        i=1
        while i<=n:
            if i%15==0:
                ans.append("FizzBuzz")
            elif i%5==0:
                ans.append("Buzz")
            elif i%3==0:
                ans.append("Fizz")
            else:
                ans.append(f"{i}")
            i+=1
        return ans
