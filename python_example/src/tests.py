from modules.submodule import concat_function


def test_concat_function():
    assert concat_function('a', 'b') == 'ab'


def test_failed():
    assert concat_function('a', 'b') == 'a b'
