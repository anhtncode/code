N = int(1e5)

def tim_vt(k, d, c, i, s):
    l = -1
    while d <= c:
        g = (d + c) // 2
        if s[i] - s[g] >= k:
            l = g
            d = g + 1
        else:
            c = g - 1
    return l

def laisuat():
   
        # Đọc dữ liệu từ tệp
        with open("LAISUAT.inp", "r") as inp:
            # Dòng 1: Đọc n và k
            n, k = map(int, inp.readline().strip().split())
            a = [0] * (n + 1)  # Mảng a có kích thước n+1
            s = [0] * (n + 1)  # Mảng s cộng dồn có kích thước n+1

            # Dòng 2: Đọc các phần tử a
            a[1:n+1] = map(int, inp.read().strip().split())
            for i in range(1, n + 1):
                s[i] = s[i - 1] + a[i]  # Tính tổng cộng dồn s[i]

        kq = N + 1

        for i in range(1, n + 1):
            p = tim_vt(k, 1, i, i, s)
            if p >= 0 and kq > i - p:
                kq = i - p

        # Ghi kết quả ra tệp
        with open("LAISUAT.out", "w") as out:
            out.write(str(kq))

    # Gọi hàm để xử lý
laisuat()
