from lib import Base

assert hasattr(Base, 'foo'), "you broke it, you fool!"


def Derived(Base):
    def bar(self):
        return 'bar'
