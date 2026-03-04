import socket

HEADER = 64
port = 8080
FORMAT = 'UTF-8'
DISC_MSG = "!DISCONNECT"

SERVER = "172.22.16.164"
ADDR = (SERVER, port)

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(ADDR)

def send(msg):
    message = msg.encode(FORMAT)

    msg_length = len(message)
    send_length = str(msg_length).encode(FORMAT)

    send_length += b' ' * (HEADER - len(send_length))

    client.sendall(send_length)
    client.sendall(message)
    print(client.recv(2048).decode(FORMAT))

send("hello This is from client side!!!")
input()
send("hello This is from client side hope u r receiving msgs..!")
input()
send(DISC_MSG)
client.close()