import socket
import threading

HEADER = 64
port = 8080
SERVER = socket.gethostbyname(socket.gethostname())
print("Hostname :", socket.gethostname())  # print hostname;
print("Server IP :", SERVER)  # prints server's IP addr;
ADDR = (SERVER, port)
FORMAT = 'UTF-8'
DISC_MSG = "!DISCONNECTED!"

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  #AF_INET refers to ipaddrV4
server.bind(ADDR)

def handle_client(conn, addr):
    print(f"[NEW CONNECTION] {addr} connected.!")   #alerts when client is connected to WS server!
    connected = True
    while connected:
        msg_length = conn.recv(HEADER).decode(FORMAT)
        if msg_length:
            msg_length = int(msg_length)
            msg = conn.recv(msg_length).decode(FORMAT)
            if msg == DISC_MSG:
                connected = False

            print(f"[{addr}] {msg}")
            conn.send("Msg Received".encode(FORMAT))

    conn.close()
    print(f"[Disconnected] {addr}")

def start():
    server.listen()
    print(f"[LISTENING] server is on listening mode..{SERVER}:{port}")   #show's the server is on listen mode with sever_ipadd:port;
    while True:
        conn, addr = server.accept()
        thread = threading.Thread(target=handle_client, args=(conn, addr))
        thread.start()

        print(f"[ACTIVE CONNECTIONS] {threading.active_count() - 1}")  #counts thread value


print(f"[STARTING] server is Starting...{SERVER}")
start()
