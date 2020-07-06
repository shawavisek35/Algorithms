def bank_balance(amount , balance):
    if(amount>=balance):
        return balance
    else:
        if(amount%5==0):
            remaining_balance = balance-(amount + 0.5)
            return round(remaining_balance,2)
        else:
            return balance

amount = int(input())
balance = float(input())
print(bank_balance(amount,balance))