def calculate_stock_span(prices):
    n = len(prices)
    span = [1] * n 
    stack = []
    
    
    for i in range(n):
        
        while stack and prices[i] >= prices[stack[-1]]:
            stack.pop()
        
        if not stack:
            span[i] = i + 1
        else:
            span[i] = i - stack[-1]
        

        stack.append(i)

    return span

def final_output(prices):
    span = calculate_stock_span(prices)
    final_span = [1 if s == 1 else 2 for s in span]  
    final_span_cubed = [x ** 3 for x in final_span]  
    return final_span_cubed

N = 7
prices = [100, 80, 60, 70, 60, 75, 85]
output = final_output(prices)
print(output)