class StockAnalyzer:
    def __init__(self):
        self.min_price = float('inf')
        self.max_profit = 0

    def calculate_profit(self, prices):
        for price in prices:
            self.min_price = min(self.min_price, price)
            self.max_profit = max(self.max_profit, price - self.min_price)

        return self.max_profit


# Driver Code
prices = [7, 1, 5, 3, 6, 4]

stock = StockAnalyzer()
print(stock.calculate_profit(prices))