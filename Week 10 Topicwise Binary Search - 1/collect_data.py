import socket

HOST = 'challs.nusgreyhats.org'
PORT = 33302

def recv_until(s, stop_text=b"> "):
    data = b""
    while not data.endswith(stop_text):
        chunk = s.recv(4096)
        if not chunk:
            break
        data += chunk
    return data

def main():
    s = socket.create_connection((HOST, PORT))
    collected = []

    for i in range(200):
        menu = recv_until(s)
        print(f"[{i+1}/200] MENU RECEIVED")
        s.sendall(b"2\n")  # Select option 2: See inside

        response = recv_until(s)
        for line in response.split(b"\n"):
            if b"Result:" in line:
                hex_data = line.split(b":")[1].strip()
                collected.append(hex_data.decode())
                print(f"Collected #{i+1}: {hex_data.decode()}")
                break

    with open("outputs.txt", "w") as f:
        for line in collected:
            f.write(line + "\n")
    print("\n✅ Done! Saved to outputs.txt")

if __name__ == "__main__":
    main()
