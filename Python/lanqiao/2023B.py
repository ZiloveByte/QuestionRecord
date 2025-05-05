def is_subsequence(seq, array):
    it = iter(array)
    return all(c in it for c in seq)
def generate_dates_2023():
    dates = []
    months = [
        (1, 31), (2, 28), (3, 31), (4, 30),
        (5, 31), (6, 30), (7, 31), (8, 31),
        (9, 30), (10, 31), (11, 30), (12, 31)
    ]
    for month, days in months:
        for day in range(1, days + 1):
            mm = f"{month:02d}"
            dd = f"{day:02d}"
            date_str = f"2023{mm}{dd}"
            seq = [2, 0, 2, 3] + [int(mm[0]), int(mm[1])] + [int(dd[0]), int(dd[1])]
            dates.append((date_str, seq))
    return dates
def main():
    arr = [
        5,6,8,6,9,1,6,1,2,4,9,1,9,8,2,3,6,4,7,7,
        5,9,5,0,3,8,7,5,8,1,5,8,6,1,8,3,0,3,7,9,
        2,7,0,5,8,5,7,0,3,8,7,5,8,1,5,8,6,1,8,
        3,0,3,7,9,2,7,0,5,8,5,7,0,5,9,5,0,3,8,
        7,5,8,1,5,8,6,1,8,3,0,3,7,9,2,7,0,5,8,5,7,0
    ]
    
    dates_info = generate_dates_2023()
    unique_dates = set()
    
    for date_str, seq in dates_info:
        if is_subsequence(seq, arr):
            unique_dates.add(date_str)
    
    print(len(unique_dates))
if __name__ == "__main__":
    main()