using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Zadatak3Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            SerialPort serial = new SerialPort("COM6");
            serial.Open();
            char[] toSend = { 'L' };
            serial.Write(toSend, 0, toSend.Length);
            serial.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            SerialPort serial = new SerialPort("COM6");
            serial.Open();
            char[] toSend = { 'S' };
            serial.Write(toSend, 0, toSend.Length);
            serial.Close();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            SerialPort serial = new SerialPort("COM6");
            serial.Open();
            char[] toSend = { 'D' };
            serial.Write(toSend, 0, toSend.Length);
            serial.Close();
        }
    }
}
