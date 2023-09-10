from math import factorial


# Задание 1 Сумма факториалов всех простых чисел, не превышающих X </summary>
# <param name="primeX"> Число Х (Integer / Целочисленный) </param>
# <returns> Сумма (Integer / Целочисленный) </returns>
def SumFactorialsOfPrimes(primeX : int):
    natural_nums: list[int] = list(
        filter(lambda x: all(x % y != 0 for y in range(2, x)),
               range(2, primeX + 1)))
    fact_nums: list[int] = [factorial(i) for i in natural_nums]

    return sum(fact_nums)


# Задание 2 ПО для вендингового аппарата </summary>
# <param name="orderSum"> Сумма заказа (Integer / Целочисленный) </param>
# <param name="clientSum"> Внесенная сумма клиентом (Integer / Целочисленный) </param>
# <returns> Сдача формата номинал : количество (Dictionary / Словарь)</returns>
def Vending(orderSum : int, clientSum : int):

    coin_types: list[int] = [5000, 2000, 1000, 500, 200, 100, 50, 10, 5, 2, 1]
    change_dict: dict[int, int] = {}
    change: int = clientSum - orderSum
    for coin in coin_types:
        if coin <= change:
            change_dict[coin] = change // coin
            change = int(change % coin)

    return change_dict


# <summary> Задание 3 Заказы на линзы для Инопланетян </summary>
# <param name="dioptries"> Значения диоптрий каждого Инопланетянина (Array / Массив) </param>
# <returns> Количество пар линз (Integer / Целочисленный) </returns>
def Lenses(dioptries : list):

    if len(dioptries) <= 1:
        return 0

    dioptries.sort()
    lens_pairs: int = 0
    index: int = 0
    while index < len(dioptries):
        if index == len(dioptries) - 1:
            lens_pairs += 1
            break
        first: int = dioptries[index]
        second: int = dioptries[index + 1]
        if abs(first - second) <= 2:
            index += 2
        else:
            index += 1
        lens_pairs += 1

    return lens_pairs


print(SumFactorialsOfPrimes(5))
print(Vending(21, 50))
print(Lenses([-1, 0, 1]))
