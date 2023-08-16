
def Lenses(dioptries: list):

    if len(dioptries) <= 1:
        return 0

    dioptries.sort()
    lens_pairs = 0
    index = 0
    while index < len(dioptries):
        if index == len(dioptries) - 1:
            lens_pairs += 1
            break
        first = dioptries[index]
        second = dioptries[index + 1]
        if abs(first - second) <= 2:
            index += 2
        else:
            index += 1
        lens_pairs += 1

    return lens_pairs


print(Lenses([-1, 0, 1, 3, 3, 3, 3, 28, 9, 28]))


def test_Lenses():
    assert Lenses([]) == 0
    assert Lenses([0]) == 0
    assert Lenses([1, -1, 2, 3, -3]) == 3
    assert Lenses([2, 2, -1, -1, 0, 0]) == 3
    assert Lenses([3, -2, 1, 0, -3, 2, -1, 4, -4, 5]) == 5
    assert Lenses([3, -2, 1, 0, -3, 2, -1, 4, -4, 5, 6, 6, 7, 3, 3, 3, 2, 28, 90]) == 11


test_Lenses()


lens_list = [3, -2, 1, 0, -3, 2, -1, 4, -4, 5, 6, 6, 7, 3, 3, 3, 2, 28]
print(sorted(lens_list))
