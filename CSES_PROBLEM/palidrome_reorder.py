from collections import Counter

class PalindromeReorder:
    def __init__(self, s: str):
        self.s = s
        self.freq = Counter(s)

    def build_palindrome(self) -> str:
        # Find odd count characters
        odd_chars = [ch for ch, count in self.freq.items() if count % 2 == 1]

        if len(odd_chars) > 1:
            return "NO SOLUTION"

        first_half = []
        middle = ""

        for ch in sorted(self.freq.keys()):  # sorted for stable output
            count = self.freq[ch]
            if count % 2 == 1:
                middle = ch * count
            first_half.append(ch * (count // 2))

        first_half_str = "".join(first_half)
        return first_half_str + middle + first_half_str[::-1]


if __name__ == "__main__":
    s = input().strip()
    solver = PalindromeReorder(s)
    print(solver.build_palindrome())
