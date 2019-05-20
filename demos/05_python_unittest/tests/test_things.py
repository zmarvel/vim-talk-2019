

import unittest


class TestThings(unittest.TestCase):
    def test_thing1(self):
        self.assertEqual(1234, 1234)

    def test_thing2(self):
        self.assertEqual(1234, 2345)
