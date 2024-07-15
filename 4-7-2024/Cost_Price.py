
def calculate_discount(cost_price, is_student):
    if is_student:
        if cost_price > 500:
            discount = 0.10 * cost_price  
        else:
            discount = 0.05 * cost_price  
    else:
        if cost_price > 500:
            discount = 0.08 * cost_price  
        else:
            discount = 0.02 * cost_price  

    return discount, cost_price - discount


def main():
    
    cost_price = float(input("Enter the cost price: "))
    is_student = input("Are you a student? (yes/no): ").strip().lower() == 'yes'

    discount, net_price = calculate_discount(cost_price, is_student)

    
    print(f"Cost Price: {cost_price}")
    print(f"Total Discount: {discount}")
    print(f"Net Price: {net_price}")

if __name__ == "__main__":
    main()
