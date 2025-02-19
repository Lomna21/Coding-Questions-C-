import React, { useState } from 'react';
import "./index.css";

export default function Calculator() {
  const [input1, setInput1] = useState('');
  const [input2, setInput2] = useState('');
  const [operator, setOperator] = useState('+');
  const [result, setResult] = useState(null);
  const [totalOperations, setTotalOperations] = useState(0);

  const calculateResult = (op) => {
    const num1 = parseFloat(input1);
    const num2 = parseFloat(input2);
    let calculatedResult;

    switch (op) {
      case '+':
        calculatedResult = num1 + num2;
        break;
      case '-':
        calculatedResult = num1 - num2;
        break;
      case '*':
        calculatedResult = num1 * num2;
        break;
      case '/':
        calculatedResult = num1 / num2;
        break;
      default:
        return;
    }

    setOperator(op);
    setResult(calculatedResult);
    setTotalOperations(prevCount => prevCount + 1);
  };

  const reset = () => {
    setInput1('');
    setInput2('');
    setOperator('+');
    setResult(null);
  };

  return (
    <div className="layout-column align-items-center">
      <div data-testid="total-operations" className="pt-50 total-operations">Total operations performed: {totalOperations}</div>
      <div className="card">
        <section className="card-text">
          <div className="layout-row justify-content-around align-items-center mt-40">
            <input
              type="number"
              className="ml-3 mr-3"
              data-testid="app-input1"
              autoComplete="off"
              placeholder="Eg: 1"
              value={input1}
              onChange={(e) => setInput1(e.target.value)}
            />
            <label className="ml-2 mr-2 symbol text-center" data-testid="selected-operator">{operator}</label>
            <input
              type="number"
              data-testid="app-input2"
              autoComplete="off"
              className="ml-3 mr-3"
              placeholder="Eg: 2"
              value={input2}
              onChange={(e) => setInput2(e.target.value)}
            />
          </div>

          <div className="layout-row justify-content-around mt-30">
            <button className="operationFont" type="submit" data-testid="addButton" onClick={() => calculateResult('+')}>+</button>
            <button className="operationFont" type="submit" data-testid="subtractButton" onClick={() => calculateResult('-')}>-</button>
            <button className="operationFont" type="submit" data-testid="multiplyButton" onClick={() => calculateResult('*')}>*</button>
            <button className="operationFont" type="submit" data-testid="divideButton" onClick={() => calculateResult('/')}>/</button>
          </div>

          <div className="layout-row justify-content-between align-items-center mt-30">
            <button type="reset" data-testid="resetButton" className="outline danger" onClick={reset}>Reset</button>
            {result !== null && (
              <div className="layout-row justify-content-center align-items-center result-container">
                <div data-testid="result" className="result-value ma-0 slide-up-fade-in">{result}</div>
              </div>
            )}
          </div>
        </section>
      </div>
    </div>
  );
}
