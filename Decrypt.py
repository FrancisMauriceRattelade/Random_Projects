from cryptography.fernet import Fernet

key = "QNSrFdVJ8bYpzJN58ZiDPzlr62BalJtyc-RTy7U7TVk="

system_information_e = "CnetLog.txt"
clipboard_information_e = "AnetLog.txt"
keys_information_e = "AnetLog.txt"

encrypted_files = [system_information_e, clipboard_information_e, keys_information_e]
count = 0

for decryping_file in encrypted_files:
    with open(encrypted_files[count], 'rb') as f:
        data = f.read()

    fernet = Fernet(key)
    decrypted = fernet.decrypt(data)

    with open(encrypted_files[count], 'wb') as f:
        f.write(decrypted)

    count += 1
