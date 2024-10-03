def chia_keo():
    with open("CHIAKEO.INP", "r") as infile:
        # Đọc giá trị n và m từ dòng đầu tiên
        n, m = map(int, infile.readline().split())
        
        # Đọc tất cả các giá trị x trên cùng một dòng
        x_list = list(map(int, infile.readline().split()))

        mx = -1
        p = -1
        
        for i in range(1, n + 1):
            # Lấy giá trị x từ x_list
            x = x_list[i - 1]
            
            # Tính toán div = x // m + (x % m > 0)
            div = x // m + (x % m > 0)
            
            # Kiểm tra và cập nhật mx, p
            if mx <= div:
                mx = div
                p = i

    # Ghi kết quả ra tệp CHIAKEO.OUT
    with open("CHIAKEO.OUT", "w") as outfile:
        outfile.write(str(p))

# Gọi hàm để xử lý
chia_keo()
