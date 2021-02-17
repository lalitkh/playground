class Polynomial:
    def __init__(self, *coeffs) -> None:
        self.coeffs = coeffs

    def __repr__(self) -> str:
        return 'Polynomial(*{!r})'.format(self.coeffs)

    def foo():
        pass
