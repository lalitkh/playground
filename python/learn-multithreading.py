import threading
import logging
from time import sleep


def thread_func(name):
    logging.info(f'Thread {name} starting')
    sleep(2)
    logging.info(f'Thread {name} finishing')


if __name__ == '__main__':
    log_format = "%(asctime)s: %(message)s"
    logging.basicConfig(format=log_format, level=logging.INFO, datefmt="%H:%M:%S")

    # logging.info(f'Main Before creating thread')
    #
    # x = threading.Thread(target=thread_func, args=(1,), daemon=True)
    #
    # logging.info(f'Main Before running thread')
    #
    # x.start()
    #
    # logging.info(f'Main wait for thread to finish')
    #
    # x.join()
    #
    # logging.info(f'Main all done')

    threads = []

    for index in range(3):
        logging.info("Main    : create and start thread %d.", index)
        x = threading.Thread(target=thread_func, args=(index,))
        threads.append(x)
        x.start()

    for index, thread in enumerate(threads):
        logging.info("Main    : before joining thread %d.", index)
        thread.join()
        logging.info("Main    : thread %d done", index)